//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TencentBaseMessageObj.h"

@class TencentImageMessageObjV1, TencentVideoMessageV1;

@interface TencentImageAndVideoMessageObjV1 : TencentBaseMessageObj
{
    TencentImageMessageObjV1 *_objImageMessage;
    TencentVideoMessageV1 *_objVideoMessage;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isVaild;
- (void)setVideoUrl:(id)arg1;
- (void)setDataImage:(id)arg1;
@property(retain, nonatomic) TencentVideoMessageV1 *objVideoMessage; // @dynamic objVideoMessage;
@property(retain, nonatomic) TencentImageMessageObjV1 *objImageMessage; // @dynamic objImageMessage;
- (id)initWithMessage:(id)arg1 videoUrl:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

