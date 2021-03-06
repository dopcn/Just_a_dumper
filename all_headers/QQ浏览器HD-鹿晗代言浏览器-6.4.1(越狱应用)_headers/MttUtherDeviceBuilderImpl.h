//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MttUtherDevice-Protocol.h"

@class NSNumber, NSString;

@interface MttUtherDeviceBuilderImpl : NSObject <MttUtherDevice>
{
    NSString *_GUID;
    NSString *_OSVersion;
    NSString *_appVersion;
    NSString *_model;
    NSString *_pushToken;
    NSNumber *_build;
}

@property(copy, nonatomic) NSNumber *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *OSVersion; // @synthesize OSVersion=_OSVersion;
@property(copy, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)buildResourceParams;
- (id)buildRegisterParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

