//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseRequestModel.h"

@class NSString;

@interface CCB_I_PC0003 : CCBBaseRequestModel
{
    NSString *_UserId;
    NSString *_ChanelType;
    NSString *_Type;
    NSString *_ParamName;
    NSString *_GroupId;
    NSString *_Time;
}

@property(copy, nonatomic) NSString *Time; // @synthesize Time=_Time;
@property(copy, nonatomic) NSString *GroupId; // @synthesize GroupId=_GroupId;
@property(copy, nonatomic) NSString *ParamName; // @synthesize ParamName=_ParamName;
@property(copy, nonatomic) NSString *Type; // @synthesize Type=_Type;
@property(copy, nonatomic) NSString *ChanelType; // @synthesize ChanelType=_ChanelType;
@property(copy, nonatomic) NSString *UserId; // @synthesize UserId=_UserId;
- (void).cxx_destruct;

@end

