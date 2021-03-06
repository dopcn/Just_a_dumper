//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ONEDNSConfig : NSObject
{
    _Bool _isON;
    _Bool _isEnabled;
    _Bool _isAllowOnProxy;
    _Bool _isEnableHistoryRecord;
    _Bool _isFastStart;
    _Bool _isMultiNetCache;
    _Bool _isTTLv2;
    long long _maxFailCount;
    long long _maxFailDuration;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long maxFailDuration; // @synthesize maxFailDuration=_maxFailDuration;
@property(nonatomic) long long maxFailCount; // @synthesize maxFailCount=_maxFailCount;
@property(nonatomic) _Bool isTTLv2; // @synthesize isTTLv2=_isTTLv2;
@property(nonatomic) _Bool isMultiNetCache; // @synthesize isMultiNetCache=_isMultiNetCache;
@property(nonatomic) _Bool isFastStart; // @synthesize isFastStart=_isFastStart;
@property(nonatomic) _Bool isEnableHistoryRecord; // @synthesize isEnableHistoryRecord=_isEnableHistoryRecord;
@property(nonatomic) _Bool isAllowOnProxy; // @synthesize isAllowOnProxy=_isAllowOnProxy;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isON; // @synthesize isON=_isON;
- (unsigned long long)getHTTPDNSSwitchType;
- (void)parse:(id)arg1;
- (id)initWithDictionary:(id)arg1 isON:(_Bool)arg2;

@end

