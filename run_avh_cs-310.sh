#!/usr/bin/env bash
VHT_Corstone_SSE-310_Ethos-U65 -V "./framework/interface/VSI/audio/python" -f ./framework/layer/Board/AVH_MPS3_Corstone-310/IoT/fvp_config.txt -a out/microspeech/AVH_MPS3_Corstone-310/Release/microspeech.axf --stat --simlimit 24 $*
