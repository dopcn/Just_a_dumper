//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YKBarrageUser : NSObject
{
    _Bool _isVip;
    _Bool _isStar;
    NSString *_Uid;
}

@property(nonatomic) _Bool isStar; // @synthesize isStar=_isStar;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(copy, nonatomic) NSString *Uid; // @synthesize Uid=_Uid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

