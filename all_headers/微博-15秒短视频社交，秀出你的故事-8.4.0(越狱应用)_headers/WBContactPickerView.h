//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContactContactsView.h"

@class NSArray, NSMutableArray;
@protocol WBContactPickerViewDelegate><WBContactContactsViewDelegate;

@interface WBContactPickerView : WBContactContactsView
{
    _Bool _enableNetworkSearch;
    _Bool _showRecentContacts;
    _Bool _hasRecentContacts;
    NSMutableArray *_contactsWrapper;
    NSMutableArray *_recentFollowerContacts;
    NSArray *_networkSearchItem;
}

@property(retain, nonatomic) NSArray *networkSearchItem; // @synthesize networkSearchItem=_networkSearchItem;
@property(retain, nonatomic) NSMutableArray *recentFollowerContacts; // @synthesize recentFollowerContacts=_recentFollowerContacts;
@property(nonatomic) _Bool hasRecentContacts; // @synthesize hasRecentContacts=_hasRecentContacts;
@property(retain, nonatomic) NSMutableArray *contactsWrapper; // @synthesize contactsWrapper=_contactsWrapper;
@property(nonatomic) _Bool showRecentContacts; // @synthesize showRecentContacts=_showRecentContacts;
@property(nonatomic, getter=isEnableNetworkSearch) _Bool enableNetworkSearch; // @synthesize enableNetworkSearch=_enableNetworkSearch;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)indexPathWithSameContact:(id)arg1 atTableView:(id)arg2;
- (void)tableView:(id)arg1 reloadRowsWithContact:(id)arg2 andIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)cancelSearching;
- (void)copySearchDataSource;
- (id)contactsDataSourceOfTableView:(id)arg1;
- (void)refreshContacts;
- (id)localSearchPredicateForKey:(id)arg1;
- (void)layoutSubviews;
- (_Bool)isFullCapacity;
- (_Bool)isContainsMember:(id)arg1;
- (id)staticMemberIDs;
- (id)selectedMembers;
- (unsigned long long)localSearchCount;
- (id)searchBarText;
- (void)showFullCapacityWarning;
- (void)setSearchBarPlaceHolder;
- (void)reloadData;
- (void)finishSearching;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andShouldShowSearchSelectBtn:(_Bool)arg2 andShouldShowH5SelectBtn:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andShouldShowSearchSelectBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <WBContactPickerViewDelegate><WBContactContactsViewDelegate> delegate; // @dynamic delegate;

@end

