//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MttWupUniItem : NSObject
{
    CDUnknownBlockType _blockPermitSend;
    CDUnknownBlockType _blockGetRequest;
    CDUnknownBlockType _blockMulRequest;
    CDUnknownBlockType _blockResponse;
}

@property(copy, nonatomic) CDUnknownBlockType blockResponse; // @synthesize blockResponse=_blockResponse;
@property(copy, nonatomic) CDUnknownBlockType blockMulRequest; // @synthesize blockMulRequest=_blockMulRequest;
@property(copy, nonatomic) CDUnknownBlockType blockGetRequest; // @synthesize blockGetRequest=_blockGetRequest;
@property(copy, nonatomic) CDUnknownBlockType blockPermitSend; // @synthesize blockPermitSend=_blockPermitSend;
- (void).cxx_destruct;

@end

