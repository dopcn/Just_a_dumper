//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVModelObject.h"

@class NSArray, NSString;

@interface WVPackageAppInfoModel : WVModelObject
{
    unsigned long long _seq;
    NSString *_mappingUrl;
    NSArray *_addFolders;
    NSArray *_removedFolders;
    NSArray *_removedRes;
    long long _appMonitor;
}

@property(nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(copy, nonatomic) NSArray *removedRes; // @synthesize removedRes=_removedRes;
@property(copy, nonatomic) NSArray *removedFolders; // @synthesize removedFolders=_removedFolders;
@property(copy, nonatomic) NSArray *addFolders; // @synthesize addFolders=_addFolders;
@property(copy, nonatomic) NSString *mappingUrl; // @synthesize mappingUrl=_mappingUrl;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (void).cxx_destruct;

@end

