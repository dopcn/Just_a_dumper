//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASKSpecifier, NSIndexPath, UITableView;
@protocol IASKSettingsStore;

@interface IASKMultipleValueSelection : NSObject
{
    long long _checkedIndex;
    UITableView *_tableView;
    IASKSpecifier *_specifier;
    long long _section;
    id <IASKSettingsStore> _settingsStore;
}

@property(retain, nonatomic) id <IASKSettingsStore> settingsStore; // @synthesize settingsStore=_settingsStore;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) IASKSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)userDefaultsDidChange;
- (void)deselectCell:(id)arg1;
- (void)selectCell:(id)arg1;
- (void)updateSelectionInCell:(id)arg1 indexPath:(id)arg2;
- (void)selectRowAtIndexPath:(id)arg1;
- (void)updateCheckedItem;
@property(readonly, copy, nonatomic) NSIndexPath *checkedItem;
- (void)dealloc;
- (id)init;

@end

