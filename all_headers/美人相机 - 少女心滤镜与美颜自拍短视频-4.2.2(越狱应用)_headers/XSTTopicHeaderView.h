//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, YYLabel;
@protocol XSTTopicHeaderViewDataSource, XSTTopicHeaderViewDelegate;

@interface XSTTopicHeaderView : UIView
{
    id <XSTTopicHeaderViewDelegate> _delegate;
    id <XSTTopicHeaderViewDataSource> _dataSource;
    YYLabel *_topicTitleLabel;
    YYLabel *_topicDescribeLabel;
    UIView *_pageSegmentChannelsBarView;
    NSMutableArray *_segmentChannelButtons;
    UIView *_segmentChannelsSelectView;
    long long _currentSelectIndex;
}

@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) UIView *segmentChannelsSelectView; // @synthesize segmentChannelsSelectView=_segmentChannelsSelectView;
@property(retain, nonatomic) NSMutableArray *segmentChannelButtons; // @synthesize segmentChannelButtons=_segmentChannelButtons;
@property(retain, nonatomic) UIView *pageSegmentChannelsBarView; // @synthesize pageSegmentChannelsBarView=_pageSegmentChannelsBarView;
@property(retain, nonatomic) YYLabel *topicDescribeLabel; // @synthesize topicDescribeLabel=_topicDescribeLabel;
@property(retain, nonatomic) YYLabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(nonatomic) __weak id <XSTTopicHeaderViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <XSTTopicHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollToSegmentChannelAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)buttonAction:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)composition;
- (id)initWithFrame:(struct CGRect)arg1;

@end

