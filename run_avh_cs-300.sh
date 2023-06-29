#!/usr/bin/env bash
VHT_Corstone_SSE-300_Ethos-U55 -V "./framework/interface/VSI/audio/python" -f ./framework/layer/Board/AVH_MPS3_Corstone-300/IoT/fvp_config.txt -a out/microspeech/AVH_MPS3_Corstone-300/Release/microspeech.axf --stat --simlimit 24 $*
