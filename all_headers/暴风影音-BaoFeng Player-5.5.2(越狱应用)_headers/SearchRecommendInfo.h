//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SearchRecommendInfo : NSObject
{
    NSString *count;
    NSString *begin;
    NSString *end;
    NSString *key;
    NSString *status;
    NSMutableArray *searchResultArray;
}

@property(retain, nonatomic) NSMutableArray *searchResultArray; // @synthesize searchResultArray;
@property(retain, nonatomic) NSString *status; // @synthesize status;
@property(retain, nonatomic) NSString *key; // @synthesize key;
@property(retain, nonatomic) NSString *end; // @synthesize end;
@property(retain, nonatomic) NSString *begin; // @synthesize begin;
@property(retain, nonatomic) NSString *count; // @synthesize count;
- (void)parse:(id)arg1;
- (void)dealloc;

@end

