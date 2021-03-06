//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

#import "CTHotelFilterViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CTHotelFilterView, CTHotelPicUploadCacheBean, CTWebImageView, NSString, UIButton, UIImageView, UITableView, UITextField, UIView;

@interface CTHotelUploadImageTableCell : CTHotelBaseCell <CTHotelFilterViewDelegate, UITextFieldDelegate>
{
    UITableView *_tableView;
    CTHotelFilterView *_roomImageTypeView;
    UITextField *_txtImageComment;
    UIImageView *_roomImageView;
    CTWebImageView *_netImageView;
    UIView *_panelView;
    CTHotelPicUploadCacheBean *_cacheBean;
    long long _index;
    UIButton *_trashButton;
}

+ (double)getCellHeightWith:(id)arg1 index:(long long)arg2;
@property(retain, nonatomic) UIButton *trashButton; // @synthesize trashButton=_trashButton;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) CTHotelPicUploadCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) CTWebImageView *netImageView; // @synthesize netImageView=_netImageView;
@property(retain, nonatomic) UIImageView *roomImageView; // @synthesize roomImageView=_roomImageView;
@property(retain, nonatomic) UITextField *txtImageComment; // @synthesize txtImageComment=_txtImageComment;
@property(retain, nonatomic) CTHotelFilterView *roomImageTypeView; // @synthesize roomImageTypeView=_roomImageTypeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)ensureEditViewBeSeen;
- (void)hotelFilterViewSelectedItem:(long long)arg1 code:(id)arg2 selected:(_Bool)arg3;
- (void)setUploadCacheBean:(id)arg1 index:(long long)arg2;
- (void)deleteImage:(id)arg1;
- (void)initView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

