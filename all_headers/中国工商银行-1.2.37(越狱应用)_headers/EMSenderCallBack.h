//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EMSenderCallBack : NSObject
{
    CDUnknownBlockType _senderPrepare;
    CDUnknownBlockType _senderSuccess;
    CDUnknownBlockType _senderFail;
    CDUnknownBlockType _startChildService;
    CDUnknownBlockType _computeChildServiceCount;
}

@property(copy, nonatomic) CDUnknownBlockType computeChildServiceCount; // @synthesize computeChildServiceCount=_computeChildServiceCount;
@property(copy, nonatomic) CDUnknownBlockType startChildService; // @synthesize startChildService=_startChildService;
@property(copy, nonatomic) CDUnknownBlockType senderFail; // @synthesize senderFail=_senderFail;
@property(copy, nonatomic) CDUnknownBlockType senderSuccess; // @synthesize senderSuccess=_senderSuccess;
@property(copy, nonatomic) CDUnknownBlockType senderPrepare; // @synthesize senderPrepare=_senderPrepare;
- (void).cxx_destruct;
- (id)init;

@end

