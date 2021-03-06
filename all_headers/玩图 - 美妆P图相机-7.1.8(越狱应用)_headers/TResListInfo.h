//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TResListInfo : NSObject <NSCoding, NSCopying>
{
    _Bool _isNewList;
    long long _listId;
    NSString *_listName;
    NSString *_listNameCN;
    NSString *_listNameTW;
    NSString *_iconUrl;
    NSString *_iconUrlSelected;
    NSString *_listTitle;
    NSString *_listColor;
    NSString *_selectColor;
    NSString *_skuid;
    long long _resPlaceType;
    NSMutableArray *_videotrueinfoArray;
}

@property(retain, nonatomic) NSMutableArray *videotrueinfoArray; // @synthesize videotrueinfoArray=_videotrueinfoArray;
@property(nonatomic) long long resPlaceType; // @synthesize resPlaceType=_resPlaceType;
@property(nonatomic) _Bool isNewList; // @synthesize isNewList=_isNewList;
@property(retain, nonatomic) NSString *skuid; // @synthesize skuid=_skuid;
@property(retain, nonatomic) NSString *selectColor; // @synthesize selectColor=_selectColor;
@property(retain, nonatomic) NSString *listColor; // @synthesize listColor=_listColor;
@property(retain, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
@property(retain, nonatomic) NSString *iconUrlSelected; // @synthesize iconUrlSelected=_iconUrlSelected;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *listNameTW; // @synthesize listNameTW=_listNameTW;
@property(retain, nonatomic) NSString *listNameCN; // @synthesize listNameCN=_listNameCN;
@property(retain, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(nonatomic) long long listId; // @synthesize listId=_listId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseJson:(id)arg1;
- (void)dealloc;
- (id)getIconUrlSelectedNew;
- (id)getIconUrlNew;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

