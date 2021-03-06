//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSOperateData, VSOperationTemplet;
@protocol VSOperationUnitDelegate;

@interface VSOperationUnitTemplet : NSObject
{
    _Bool _isMotionUnit;
    int _motionType;
    VSOperateData *_operateData;
    VSOperationTemplet *_ownerTemplet;
    id <VSOperationUnitDelegate> _delegate;
    struct CGRect _operationUnitFrame;
}

@property(nonatomic) __weak id <VSOperationUnitDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VSOperationTemplet *ownerTemplet; // @synthesize ownerTemplet=_ownerTemplet;
@property(nonatomic) int motionType; // @synthesize motionType=_motionType;
@property(nonatomic) _Bool isMotionUnit; // @synthesize isMotionUnit=_isMotionUnit;
@property(retain, nonatomic) VSOperateData *operateData; // @synthesize operateData=_operateData;
@property(nonatomic) struct CGRect operationUnitFrame; // @synthesize operationUnitFrame=_operationUnitFrame;
- (void).cxx_destruct;
- (_Bool)isRouteChannelSearch;
- (void)displayImageFinishDownload:(_Bool)arg1;
- (double)oxoOperationVideoViewHeightWithWidth:(double)arg1;
- (double)operationVideoViewHeightWithWidth:(double)arg1 hasTitle:(_Bool)arg2;

@end

