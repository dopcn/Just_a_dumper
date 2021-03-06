//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QYMMoviePopUpWindowData, QYURLSessionDataTask, UIButton, UIImageView, UIView;
@protocol QYMFloatSignManagerDelegate;

@interface QYMFloatSignManager : NSObject
{
    _Bool _floatSignHidden;
    id <QYMFloatSignManagerDelegate> _delegate;
    QYURLSessionDataTask *_popUpWindowTask;
    UIView *_floatSignView;
    UIImageView *_floatSignImage;
    UIButton *_floatSignClose;
    QYMMoviePopUpWindowData *_floatSignData;
    NSString *_dateString;
}

+ (id)shareInstace;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(nonatomic) _Bool floatSignHidden; // @synthesize floatSignHidden=_floatSignHidden;
@property(retain, nonatomic) QYMMoviePopUpWindowData *floatSignData; // @synthesize floatSignData=_floatSignData;
@property(retain, nonatomic) UIButton *floatSignClose; // @synthesize floatSignClose=_floatSignClose;
@property(retain, nonatomic) UIImageView *floatSignImage; // @synthesize floatSignImage=_floatSignImage;
@property(retain, nonatomic) UIView *floatSignView; // @synthesize floatSignView=_floatSignView;
@property(retain, nonatomic) QYURLSessionDataTask *popUpWindowTask; // @synthesize popUpWindowTask=_popUpWindowTask;
@property(nonatomic) __weak id <QYMFloatSignManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)destoryFloatSign;
- (void)closeFloatSign;
- (void)hideFloatSign;
- (void)showFloatSign;
- (id)getSignView;
- (void)toActivity;
- (void)addToView;
- (void)close;
- (void)layoutFloatSignView;
- (void)initSubview;
- (_Bool)isShowFloatSign;
- (id)getLocalDateString;
- (void)requestPopUpSign;
- (id)init;

@end

