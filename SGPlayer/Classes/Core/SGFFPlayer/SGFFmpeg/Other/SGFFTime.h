//
//  SGFFTime.h
//  SGPlayer
//
//  Created by Single on 2018/1/18.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct SGFFTimebase {
    int num;
    int den;
} SGFFTimebase;

typedef struct SGFFTime {
    long long timestamp;
    SGFFTimebase timebase;
} SGFFTime;

SGFFTime SGFFTimeIdentity(void);
SGFFTimebase SGFFTimebaseIdentity(void);
SGFFTimebase SGFFTimebaseValidate(int num, int den, int num_def, int den_def);
double SGFFTimeGetSeconds(SGFFTime time);
double SGFFTimestampConvertToSeconds(long long timestamp, SGFFTimebase timebase);
long long SGFFSecondsConvertToTimestamp(double seconds, SGFFTimebase timebase);
