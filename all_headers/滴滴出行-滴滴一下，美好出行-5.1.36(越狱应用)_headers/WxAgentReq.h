//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WxAgentReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bindMsg; // @dynamic bindMsg;
@property(copy, nonatomic) NSString *bindSubject; // @dynamic bindSubject;
@property(copy, nonatomic) NSString *bindTitle; // @dynamic bindTitle;
@property(copy, nonatomic) NSString *buttonCancel; // @dynamic buttonCancel;
@property(copy, nonatomic) NSString *buttonConfirm; // @dynamic buttonConfirm;
@property(nonatomic) _Bool hasBindMsg; // @dynamic hasBindMsg;
@property(nonatomic) _Bool hasBindSubject; // @dynamic hasBindSubject;
@property(nonatomic) _Bool hasBindTitle; // @dynamic hasBindTitle;
@property(nonatomic) _Bool hasButtonCancel; // @dynamic hasButtonCancel;
@property(nonatomic) _Bool hasButtonConfirm; // @dynamic hasButtonConfirm;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int type; // @dynamic type;

@end

