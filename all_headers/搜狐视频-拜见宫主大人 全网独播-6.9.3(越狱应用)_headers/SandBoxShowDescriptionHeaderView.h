//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString;
@protocol SandBoxShowDescriptionHeaderViewDelegate;

@interface SandBoxShowDescriptionHeaderView : UITableViewHeaderFooterView
{
    id <SandBoxShowDescriptionHeaderViewDelegate> _delegate;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SandBoxShowDescriptionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickedSectionHeaderView:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

