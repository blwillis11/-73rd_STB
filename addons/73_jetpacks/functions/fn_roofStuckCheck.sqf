params ["_posASL","_vel"];

_currentY = _posASL select 2;
if(_currentY == 0 or _vel select 2 <= 0 or isTouchingGround player or (stance player) == "UNDEFINED") exitWith {false};

if(abs(_currentY - JJP_JumpPack_lastY) <= 0.02) then {
    if(JJP_JumpPack_stuckCount >= 3) exitWith {
        player setVelocity [_vel select 0,_vel select 1,-0.5];
        JJP_JumpPack_timesStuck = JJP_JumpPack_timesStuck + 1;
        true
    };
    JJP_JumpPack_stuckCount = JJP_JumpPack_stuckCount + 1;
    false
} else {
    JJP_JumpPack_stuckCount = 0;
    JJP_JumpPack_lastY = _currentY;
    false
};