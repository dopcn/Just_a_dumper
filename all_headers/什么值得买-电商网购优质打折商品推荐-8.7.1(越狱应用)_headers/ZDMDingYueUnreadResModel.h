//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ZDMDingYueUnreadResModel : NSObject
{
    _Bool _forcedHide;
    NSString *_unreadNum;
}

+ (id)yw_propertyOnMapperDict;
+ (id)mj_replacedKeyFromPropertyName;
+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool forcedHide; // @synthesize forcedHide=_forcedHide;
@property(copy, nonatomic) NSString *unreadNum; // @synthesize unreadNum=_unreadNum;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

