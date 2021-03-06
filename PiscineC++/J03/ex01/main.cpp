/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:16:28 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 12:17:23 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ScavTrap.hpp>

int		main(void)
{

	unsigned int	damage;

	FragTrap jean("Jean");
	ScavTrap jacques("Jacques");
	std::cout << std::endl;
	std::cout << std::endl;

	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jacques.rangedAttack(jean.getName());
	jean.takeDamage(jacques.getRangedDamage());
	jean.beRepaired(20);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	damage = jacques.challengeNewcomer(jean.getName());
	jean.takeDamage(damage);
	jacques.beRepaired(50);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jacques.challengeNewcomer(jean.getName());
	jean.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
