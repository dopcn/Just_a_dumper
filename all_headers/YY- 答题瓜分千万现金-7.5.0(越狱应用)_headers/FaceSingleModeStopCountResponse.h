//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FaceSingleModeBaseResponse.h"

@class NSString;

@interface FaceSingleModeStopCountResponse : FaceSingleModeBaseResponse
{
    unsigned int _leftTimes;
    NSString *_err_desc;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(copy, nonatomic) NSString *err_desc; // @synthesize err_desc=_err_desc;
@property(nonatomic) unsigned int leftTimes; // @synthesize leftTimes=_leftTimes;
- (void).cxx_destruct;
- (id)description;

@end

