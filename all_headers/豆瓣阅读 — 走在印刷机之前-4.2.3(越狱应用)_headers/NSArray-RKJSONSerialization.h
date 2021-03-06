//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSData, NSString;

@interface NSArray (RKJSONSerialization)
+ (id)rk_arrayWithJSONString:(id)arg1 options:(unsigned long long)arg2 error:(out id *)arg3;
+ (id)rk_arrayWithJSONData:(id)arg1 options:(unsigned long long)arg2 error:(out id *)arg3;
+ (id)rk_arrayWithJSONString:(id)arg1;
+ (id)rk_arrayWithJSONData:(id)arg1;
- (id)rk_JSONStringWithOptions:(unsigned long long)arg1 error:(out id *)arg2;
- (id)rk_JSONDataWithOptions:(unsigned long long)arg1 error:(out id *)arg2;
@property(readonly, copy, nonatomic) NSString *rk_JSONString;
@property(readonly, copy, nonatomic) NSData *rk_JSONData;
@property(readonly, nonatomic, getter=rk_isValidJSONObject) _Bool rk_validJSONObject;
@end

