//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ActionCommand.h"

@class NSString;

@interface ActionCommandGoToRedeemPage : ActionCommand
{
    NSString *_redeemCode;
    NSString *_channelID;
}

@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *redeemCode; // @synthesize redeemCode=_redeemCode;
- (void)dealloc;
- (id)initWithFactory:(id)arg1;

@end

