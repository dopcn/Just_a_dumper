//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PSTunnel;
@protocol PSManagerDelegate;

@interface PSPushManager : NSObject
{
    id <PSManagerDelegate> _delegate;
    NSDictionary *_launchOptions;
    PSTunnel *_tunnel;
}

@property(retain, nonatomic) PSTunnel *tunnel; // @synthesize tunnel=_tunnel;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) __weak id <PSManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bindApnsTokenWithPushtoken;
- (void)httpRegist;
- (id)dicToJsonString:(id)arg1;
- (void)handleBussniessResponeWithDictionary:(id)arg1;
- (id)init;

@end

