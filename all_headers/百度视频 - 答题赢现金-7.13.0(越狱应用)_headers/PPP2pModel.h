//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PPP2pModel : NSObject
{
}

+ (id)sharedPPP2pModel;
- (id)getLastErrorCode;
- (void)setPlayInfoWithName:(id)arg1 andType:(id)arg2 andInfo:(id)arg3;
- (_Bool)testLocalServer;
- (unsigned long long)getSerialnum;
- (id)getPlayHost;
- (id)getSdkVersion;
- (unsigned long long)getRtspPort;
- (unsigned long long)getHttpPort;
- (void)closeWithSerialnum;
- (void)stopPPBox;
- (void)restartPPBox;
- (void)startPPBox;

@end

