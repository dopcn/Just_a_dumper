//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AHUBDNSManager : NSObject
{
    NSMutableArray *_addressList;
    unsigned long long _procotol;
}

+ (int)FailureTimes;
+ (void)resetFailureTimes;
+ (void)addFailureTimes;
+ (void)getPlistDomainsSetting;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long procotol; // @synthesize procotol=_procotol;
@property(retain, nonatomic) NSMutableArray *addressList; // @synthesize addressList=_addressList;
- (void).cxx_destruct;
- (void)unarchiveProperties;
- (void)archiveProperties;
- (void)setAddressBase;
- (void)switchHttpHost;
- (id)init;

@end

