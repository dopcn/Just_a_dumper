//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QNBPlayerQASelectorInfo : NSObject
{
    long long _index;
    NSString *_selectorTitle;
    long long _selectedCount;
}

+ (id)parseSelectorArray:(id)arg1;
+ (id)parseQASelectorDic:(id)arg1;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(copy, nonatomic) NSString *selectorTitle; // @synthesize selectorTitle=_selectorTitle;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

