//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BCATextFieldLimiter : NSObject
{
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (_Bool)stringContainsEmoji:(id)arg1;
- (_Bool)textFieldFileNameUniqueCheck:(id)arg1 folderID:(id)arg2;
- (_Bool)textFieldObeyLocalRule:(id)arg1;
- (void)textFieldDidChange:(id)arg1;

@end

