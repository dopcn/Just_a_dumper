//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMNRANetworkTask, BMUploadImageData;

@interface BMUGCUploadImageModel : NSObject
{
    _Bool _showWatting;
    _Bool _showToast;
    BMNRANetworkTask *_request;
    long long _index;
    BMUploadImageData *_imgData;
}

@property(nonatomic) _Bool showToast; // @synthesize showToast=_showToast;
@property(nonatomic) _Bool showWatting; // @synthesize showWatting=_showWatting;
@property(retain, nonatomic) BMUploadImageData *imgData; // @synthesize imgData=_imgData;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) BMNRANetworkTask *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)uploadFail:(id)arg1 outData:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)uploadFailInMainThread:(id)arg1 outData:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)uploadSuccess:(id)arg1 uploadImageData:(id)arg2 outData:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)uploadImg:(id)arg1 uploadImage:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)showWatting:(_Bool)arg1;
- (void)showToast:(_Bool)arg1;
- (id)init:(long long)arg1;

@end

