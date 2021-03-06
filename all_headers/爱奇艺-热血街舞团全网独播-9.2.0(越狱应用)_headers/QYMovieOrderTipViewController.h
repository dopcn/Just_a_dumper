//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYBaseCardViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYTableViewDelegate-Protocol.h"
#import "QYUCardBaseCellDelegate-Protocol.h"

@class IQYCardViewManager, NSString, NSTimer, QYCardPopADInfo;
@protocol QYMovieOrderTipViewControllerDelegate;

@interface QYMovieOrderTipViewController : QYBaseCardViewController <QYUCardBaseCellDelegate, QYTableViewDelegate, IQYDataLoadManagerDelegate>
{
    id <QYMovieOrderTipViewControllerDelegate> _movieTipDelegate;
    IQYCardViewManager *_movieTipMananger;
    QYCardPopADInfo *_movieTipInfo;
    NSTimer *_timer;
    double _curTime;
}

@property(nonatomic) double curTime; // @synthesize curTime=_curTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) QYCardPopADInfo *movieTipInfo; // @synthesize movieTipInfo=_movieTipInfo;
@property(retain, nonatomic) IQYCardViewManager *movieTipMananger; // @synthesize movieTipMananger=_movieTipMananger;
@property(nonatomic) __weak id <QYMovieOrderTipViewControllerDelegate> movieTipDelegate; // @synthesize movieTipDelegate=_movieTipDelegate;
- (void).cxx_destruct;
- (void)timerAction;
- (void)close;
- (void)movieOrderCardClosed:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)requestMovieOrderTipWithADInfo:(id)arg1;
- (void)initCardView;
- (void)initTimer;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

