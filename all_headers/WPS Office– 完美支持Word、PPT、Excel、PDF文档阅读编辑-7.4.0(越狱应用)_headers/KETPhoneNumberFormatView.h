//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class KETComUseFormatView, UILabel, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate><KETComUseFormatDelegate;

@interface KETPhoneNumberFormatView : UIScrollView
{
    UILabel *titleLabel;
    KETComUseFormatView *comUseFormatView;
    UITableView *numberFormateListView;
    id <UITableViewDelegate><KETComUseFormatDelegate> _numberFormatViewDelegate;
    id <UITableViewDataSource> _numberFormatViewDataSource;
}

@property(nonatomic) id <UITableViewDataSource> numberFormatViewDataSource; // @synthesize numberFormatViewDataSource=_numberFormatViewDataSource;
@property(nonatomic) id <UITableViewDelegate><KETComUseFormatDelegate> numberFormatViewDelegate; // @synthesize numberFormatViewDelegate=_numberFormatViewDelegate;
- (void)layoutSubviews;
- (void)reloadData;
- (id)init;
- (void)dealloc;

@end

