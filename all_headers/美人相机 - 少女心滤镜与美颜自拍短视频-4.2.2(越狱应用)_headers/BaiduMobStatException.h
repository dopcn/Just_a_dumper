//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BaiduMobStatExMem, NSNumber, NSString;

@interface BaiduMobStatException : NSObject
{
    NSNumber *_t;
    NSString *_c;
    NSString *_y;
    NSString *_v;
    NSNumber *_ct;
    BaiduMobStatExMem *_mem;
}

@property(retain, nonatomic) BaiduMobStatExMem *mem; // @synthesize mem=_mem;
@property(retain, nonatomic) NSNumber *ct; // @synthesize ct=_ct;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *y; // @synthesize y=_y;
@property(copy, nonatomic) NSString *c; // @synthesize c=_c;
@property(retain, nonatomic) NSNumber *t; // @synthesize t=_t;
- (void).cxx_destruct;
- (id)descriptionDictionary;
- (id)init;

@end

