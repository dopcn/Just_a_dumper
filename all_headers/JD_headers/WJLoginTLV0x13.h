//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@interface WJLoginTLV0x13 : WJLoginTLVBase
{
    unsigned char _replyCode;
    int _elapsedTime;
}

@property(nonatomic) unsigned char replyCode; // @synthesize replyCode=_replyCode;
@property(nonatomic) int elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (unsigned long long)getTLVLength;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillTLVWithTLVInfo:(id)arg1;

@end

