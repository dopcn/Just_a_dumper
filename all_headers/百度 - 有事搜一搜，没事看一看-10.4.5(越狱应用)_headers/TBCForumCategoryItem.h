//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSArray, NSString;

@interface TBCForumCategoryItem : TBCBaseItem
{
    NSString *_menuType;
    NSString *_menuName;
    NSString *_menuID;
    NSString *_menuLevel;
    NSString *_defaultLogoUrl;
    NSArray *_childMenuList;
}

@property(copy, nonatomic) NSArray *childMenuList; // @synthesize childMenuList=_childMenuList;
@property(copy, nonatomic) NSString *defaultLogoUrl; // @synthesize defaultLogoUrl=_defaultLogoUrl;
@property(copy, nonatomic) NSString *menuLevel; // @synthesize menuLevel=_menuLevel;
@property(copy, nonatomic) NSString *menuID; // @synthesize menuID=_menuID;
@property(copy, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(copy, nonatomic) NSString *menuType; // @synthesize menuType=_menuType;
- (id)init;
- (void)dealloc;

@end

