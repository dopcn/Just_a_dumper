//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMNRANetworkTask;

@interface BMFootmarkWorldUploadRequest : NSObject
{
    BMNRANetworkTask *_requestTask;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) BMNRANetworkTask *requestTask; // @synthesize requestTask=_requestTask;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)uploadImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

