//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMOnlineDocumentShareAlertController, NSMutableArray, UIScrollView;

@interface FMOnlineDocumentShareOperationView : UIView
{
    UIScrollView *_itemScrollView;
    NSMutableArray *_items;
    FMOnlineDocumentShareAlertController *_rootAlertController;
}

@property(nonatomic) __weak FMOnlineDocumentShareAlertController *rootAlertController; // @synthesize rootAlertController=_rootAlertController;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithRootAlertController:(id)arg1;

@end

