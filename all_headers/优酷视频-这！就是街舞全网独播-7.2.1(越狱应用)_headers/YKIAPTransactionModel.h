//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSString;

@interface YKIAPTransactionModel : NSObject
{
    unsigned long long _state;
    NSDate *_date;
    NSError *_error;
    NSString *_originalTransaction;
}

@property(copy) NSString *originalTransaction; // @synthesize originalTransaction=_originalTransaction;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSDate *date; // @synthesize date=_date;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)resetOriginalTransaction:(id)arg1;
- (void)resetTransaction:(id)arg1 forState:(unsigned long long)arg2;
- (id)init;

@end

