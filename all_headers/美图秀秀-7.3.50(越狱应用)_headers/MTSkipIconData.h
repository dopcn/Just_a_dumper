//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTSkipIconData : NSObject
{
    NSString *_scheme;
    NSString *_iconURL;
    long long _iconId;
    long long _module;
    NSString *_iconName;
    NSString *_webURL;
}

+ (void)preLoadSkipIconForBlackTechSavePage;
+ (id)requestSkipIconDatasWithModule:(unsigned long long)arg1;
+ (id)fetchSkipIconDataWithModule:(unsigned long long)arg1;
+ (id)defaultMapping;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) long long module; // @synthesize module=_module;
@property(nonatomic) long long iconId; // @synthesize iconId=_iconId;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;

@end

