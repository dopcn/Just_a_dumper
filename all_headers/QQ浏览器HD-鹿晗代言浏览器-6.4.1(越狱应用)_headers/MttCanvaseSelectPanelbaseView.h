//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MttImageEditingToolbarViewDataSource, MttImageEditingToolbarViewDelegate;

@interface MttCanvaseSelectPanelbaseView : UIView
{
    id <MttImageEditingToolbarViewDelegate> _delegate;
    id <MttImageEditingToolbarViewDataSource> _dataSource;
}

@property(nonatomic) __weak id <MttImageEditingToolbarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MttImageEditingToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3;

@end

