//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SNBPortfolioNewStatusNotifyManager : NSObject
{
    NSMutableSet *_porfolioPageUnreadSymbols;
    NSMutableSet *_optionPageUnreadSymbols;
}

+ (id)sharedManger;
@property(retain, nonatomic) NSMutableSet *optionPageUnreadSymbols; // @synthesize optionPageUnreadSymbols=_optionPageUnreadSymbols;
@property(retain, nonatomic) NSMutableSet *porfolioPageUnreadSymbols; // @synthesize porfolioPageUnreadSymbols=_porfolioPageUnreadSymbols;
- (void).cxx_destruct;
- (void)removeUpdatedDotOnPage:(long long)arg1 symbol:(id)arg2;
- (_Bool)isShowUpdatedDotOnPage:(long long)arg1 symbol:(id)arg2;
- (void)updatePortfolioNewStatusNotifyStatusSuccess:(CDUnknownBlockType)arg1;

@end

