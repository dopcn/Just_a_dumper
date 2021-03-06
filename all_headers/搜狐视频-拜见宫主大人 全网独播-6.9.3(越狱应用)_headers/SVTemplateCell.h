//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SVPersonaliseRecommendSingleRowTemplateViewDelegate-Protocol.h"
#import "SVSubscibeTemplateViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SVTemplateCellDelegate;

@interface SVTemplateCell : UITableViewCell <SVSubscibeTemplateViewDelegate, SVPersonaliseRecommendSingleRowTemplateViewDelegate>
{
    NSArray *_templateViews;
    id <SVTemplateCellDelegate> _delegate;
    long long _templateInfoID;
}

+ (id)viewsWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3 superview:(id)arg4;
+ (struct _NSRange)dataRangeWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3;
+ (long long)heightWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3;
+ (long long)numberOfViewsWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3;
+ (long long)rowTypeWithTemplate:(id)arg1 indexPath:(id)arg2;
+ (id)reuseIdentifierWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3;
+ (_Bool)isSupportedTemplate:(id)arg1;
+ (Class)viewClassWithTemplate:(id)arg1;
@property(nonatomic) long long templateInfoID; // @synthesize templateInfoID=_templateInfoID;
@property(nonatomic) __weak id <SVTemplateCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *templateViews; // @synthesize templateViews=_templateViews;
- (void).cxx_destruct;
- (void)willRemoveViewWithTemplateView:(id)arg1;
- (void)didSelectViewWithTemplateView:(id)arg1;
- (void)goToSubscribeWebPageWithTemplateView:(id)arg1;
- (void)showUnSubscribeWithSuccess:(_Bool)arg1 pgcStudioItem:(id)arg2;
- (void)showSubscribeWithSuccess:(_Bool)arg1 pgcStudioItem:(id)arg2;
- (void)tapWithGesture:(id)arg1;
- (void)updateWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3 columnID:(long long)arg4 actionList:(id)arg5;
- (void)prepareForReuse;
- (id)initWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3 delegate:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)templateViewWithTemplate:(id)arg1 dataList:(id)arg2 indexPath:(id)arg3 index:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

