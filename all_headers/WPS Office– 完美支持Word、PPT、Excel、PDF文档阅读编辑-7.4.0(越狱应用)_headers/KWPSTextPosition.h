//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextPosition.h>

@interface KWPSTextPosition : UITextPosition
{
    unsigned long long location_;
    long long affinity_;
}

+ (id)textPositionWithLocation:(unsigned long long)arg1 affinity:(long long)arg2;
+ (id)textPositionWithLocation:(unsigned long long)arg1;
@property(readonly, nonatomic) long long affinity; // @synthesize affinity=affinity_;
@property(readonly, nonatomic) unsigned long long location; // @synthesize location=location_;
- (_Bool)isEqualToTextPositionIgnoringAffinity:(id)arg1;
- (_Bool)isEqualToTextPosition:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compareIgnoringAffinity:(id)arg1;
- (long long)compare:(id)arg1;
- (id)textRange;
- (id)textPositionByApplyingOffset:(long long)arg1;
- (id)initWithLocation:(unsigned long long)arg1 affinity:(long long)arg2;
- (id)initWithLocation:(unsigned long long)arg1;

@end

