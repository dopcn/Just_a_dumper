//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttCartoonBeanBaseInfo.h"

#import "NSCoding-Protocol.h"

@interface MttCartoonBeanBaseInfoAdapter : MttCartoonBeanBaseInfo <NSCoding>
{
    double _cartoonReadTime;
    long long _cartoonReadChapterIndex;
    long long _cartoonCharpterCount;
}

@property(nonatomic) long long cartoonCharpterCount; // @synthesize cartoonCharpterCount=_cartoonCharpterCount;
@property(nonatomic) long long cartoonReadChapterIndex; // @synthesize cartoonReadChapterIndex=_cartoonReadChapterIndex;
@property(nonatomic) double cartoonReadTime; // @synthesize cartoonReadTime=_cartoonReadTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBaseInfo:(id)arg1;

@end

