//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBIMAttributeModel : NSObject
{
    _Bool _onlineStatus;
    _Bool _isSwiftShow;
    _Bool _keyboardShown;
    _Bool _isRecording;
    _Bool _isNeedAnimation;
    _Bool _shouldTriggerRefresh;
    _Bool _hasPreviousMessage;
    _Bool _isShowPost;
    _Bool _isOnlineShowed;
    _Bool _isSwiftToInput;
    _Bool _isInputToSwift;
    _Bool _slideCancel;
    _Bool _isShowVirifyCode;
    long long _previousMessageID;
    struct CGRect _keyboardOldFrame;
}

@property(nonatomic) _Bool isShowVirifyCode; // @synthesize isShowVirifyCode=_isShowVirifyCode;
@property(nonatomic) _Bool slideCancel; // @synthesize slideCancel=_slideCancel;
@property(nonatomic) _Bool isInputToSwift; // @synthesize isInputToSwift=_isInputToSwift;
@property(nonatomic) _Bool isSwiftToInput; // @synthesize isSwiftToInput=_isSwiftToInput;
@property(nonatomic) _Bool isOnlineShowed; // @synthesize isOnlineShowed=_isOnlineShowed;
@property(nonatomic) _Bool isShowPost; // @synthesize isShowPost=_isShowPost;
@property(nonatomic) _Bool hasPreviousMessage; // @synthesize hasPreviousMessage=_hasPreviousMessage;
@property(nonatomic) long long previousMessageID; // @synthesize previousMessageID=_previousMessageID;
@property(nonatomic) _Bool shouldTriggerRefresh; // @synthesize shouldTriggerRefresh=_shouldTriggerRefresh;
@property(nonatomic) _Bool isNeedAnimation; // @synthesize isNeedAnimation=_isNeedAnimation;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool keyboardShown; // @synthesize keyboardShown=_keyboardShown;
@property(nonatomic) _Bool isSwiftShow; // @synthesize isSwiftShow=_isSwiftShow;
@property(nonatomic) _Bool onlineStatus; // @synthesize onlineStatus=_onlineStatus;
@property(nonatomic) struct CGRect keyboardOldFrame; // @synthesize keyboardOldFrame=_keyboardOldFrame;

@end

