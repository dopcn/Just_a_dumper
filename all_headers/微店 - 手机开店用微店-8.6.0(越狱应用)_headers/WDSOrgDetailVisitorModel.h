//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseData.h"

@interface WDSOrgDetailVisitorModel : WDSBaseData
{
    _Bool _isFollow;
    long long _role;
}

@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (id)parseInfoFromDictionaryManually:(id)arg1;

@end

