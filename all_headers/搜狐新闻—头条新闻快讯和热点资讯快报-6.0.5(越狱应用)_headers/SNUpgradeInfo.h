//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSError, NSString;

@interface SNUpgradeInfo : NSObject <NSCoding>
{
    _Bool _bNeedUpgrade;
    int _upgradeType;
    int _packageSize;
    NSString *_description;
    NSString *_downloadUrl;
    NSString *_latestVer;
    NSString *_serverRtnError;
    NSError *_netWorkError;
    NSError *_networkError;
}

+ (id)upgradeInfoWithData:(id)arg1;
@property(copy, nonatomic) NSError *networkError; // @synthesize networkError=_networkError;
@property(copy, nonatomic) NSString *serverRtnError; // @synthesize serverRtnError=_serverRtnError;
@property(copy, nonatomic) NSString *latestVer; // @synthesize latestVer=_latestVer;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(nonatomic) int packageSize; // @synthesize packageSize=_packageSize;
@property(nonatomic) int upgradeType; // @synthesize upgradeType=_upgradeType;
@property(nonatomic) _Bool bNeedUpgrade; // @synthesize bNeedUpgrade=_bNeedUpgrade;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getData;
- (_Bool)hadError;

@end

