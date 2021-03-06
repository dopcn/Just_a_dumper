//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IUSCustomBtnProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString, UIImage;

@interface USCustomBtn : NSObject <IUSCustomBtnProtocol, NSCoding>
{
    _Bool _clickable;
    long long _btnID;
    UIImage *_image;
    CDUnknownBlockType _callBack;
    NSString *_imageUrl;
    NSString *_jsCallBack;
}

@property(retain, nonatomic) NSString *jsCallBack; // @synthesize jsCallBack=_jsCallBack;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) _Bool clickable; // @synthesize clickable=_clickable;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long btnID; // @synthesize btnID=_btnID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (_Bool)isEqualToBtn:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

