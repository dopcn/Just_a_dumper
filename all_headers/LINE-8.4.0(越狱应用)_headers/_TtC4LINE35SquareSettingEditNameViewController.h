//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProfileTextEditViewController.h"

@class NSString;

@interface _TtC4LINE35SquareSettingEditNameViewController : ProfileTextEditViewController
{
    // Error parsing type: , name: nameString
    // Error parsing type: , name: saveHandler
    // Error parsing type: , name: clearButton
    // Error parsing type: , name: titleString
}

+ (id)viewController;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchTextChanged;
- (void)clearSearchText;
- (void)enableTextField;
- (void)disableTextField;
- (void)buttonTapped;
- (void)inputTextChanged;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (id)inputName;
- (void)viewDidLoad;
@property(nonatomic, copy) NSString *titleString; // @synthesize titleString;
@property(nonatomic, copy) CDUnknownBlockType saveHandler; // @synthesize saveHandler;
@property(nonatomic, copy) NSString *nameString; // @synthesize nameString;

@end

