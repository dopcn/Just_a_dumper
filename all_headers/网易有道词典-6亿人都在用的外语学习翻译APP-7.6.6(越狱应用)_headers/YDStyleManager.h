//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface YDStyleManager : NSObject
{
    NSMutableDictionary *_styleModelDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *styleModelDict; // @synthesize styleModelDict=_styleModelDict;
- (void).cxx_destruct;
- (id)_encodeString:(id)arg1;
- (id)_userKey;
- (void)_sysnToCache;
- (void)_sysnFromCache;
- (void)_setupObserver;
- (void)_setupStyleManager;
- (void)cleanStyles;
- (void)updateStyleModel:(id)arg1;
- (id)styleModelWithStyle:(id)arg1;
- (id)init;

@end

