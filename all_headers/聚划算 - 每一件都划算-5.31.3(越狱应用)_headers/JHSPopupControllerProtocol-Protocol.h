//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JHSHDDataModel, JHSHDLuaViewController, NSArray;
@protocol JHSPopupProtocol;

@protocol JHSPopupControllerProtocol <NSObject>
@property(retain, nonatomic) NSArray *pages;
@property(retain, nonatomic) JHSHDDataModel *dataModel;
@property(copy, nonatomic) CDUnknownBlockType fetchPopupDataCallback;
- (JHSHDLuaViewController *)presentActivity;
- (_Bool)checkInPages;
- (id <JHSPopupProtocol>)createPopupWithType:(long long)arg1;
- (long long)remainderShowCount;
- (_Bool)shouldShow;
- (void)updateData:(id)arg1 callback:(void (^)(long long))arg2;
- (void)fetchPopupDataWithCallback:(void (^)(_Bool))arg1;
@end

